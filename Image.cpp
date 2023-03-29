#include <iostream>
#include <vector>
#include <string>

#include "Image.h"


Image::Image()
        :height(0), width(0){

}

Image::Image( const int& height, const int& width )
    :height(height), width(width) {
        this->container.resize(width * height * 3);


}
int Image::getheight( ) const
{
    return height;

}
int Image::getWidth( ) const
{
    return width;

}
bool Image::indexValid( const int& row, const int& column, const int& channel ) const
{
    if (height > row && row >= 0 && column >= 0 && width > column && 0 <= channel && channel < 3)
        return true;

    else
        return false;


}
int Image::index( const int& row, const int& column, const int& channel ) const
{
    return (row * width * 3 + column * 3) + channel;

}
int Image::getChannel( const int& row, const int& column, const int& channel ) const
{
    

} 
void Image::setHeight( const int& height )
{

}
void Image::setWidth( const int& width )
{

}
void Image::setChannel( const int& row, const int& column, const int& channel, const int& value )
{

}