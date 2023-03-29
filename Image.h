#pragma once

#include <iostream>
#include <string>
#include <vector>


class Image
{


    int width;
    int height;
    std::vector<int> container;



public:
    Image();
    Image( const int& height, const int& width );
    int getheight( ) const;
    int getWidth( ) const;
    bool indexValid( const int& row, const int& column, const int& channel ) const;
    int index( const int& row, const int& column, const int& channel ) const;
    int getChannel( const int& row, const int& column, const int& channel ) const; 
    void setHeight( const int& height );
    void setWidth( const int& width );
    void setChannel( const int& row, const int& column, const int& channel, const int& value );


};