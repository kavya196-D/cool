import requests
from bs4 import Beautifulsoup
import pandas
oyo_url="https://www.oyorooms.com/hotels_in_banglore/?page/"
page_num_MAX=3
scraped_info_list=[]
for page_num in range(1,page_num_MAX):
    req=requests.get[oyo_url+str(page_num)]
    content=req.content
    soup=Beautifulsoup (content,"html.parser")
    all_hotels=soup_find_all("div",{"class":"hotelcardlisting"})
    for hotel in all hotels:
        hotel_dict{}
        hotel_dict["name"]=hotel.find("h3",{"class":"listinghotelDescription_hotelName"}).text
        hotel_dict["address"]=hotel.find("span",{"itemprop":"streetAddress"}).text
        hotel_dict["price"]=hotel.find("span",{"class":"listingPrice_finalPrice"}).text
        try:
          hotel_dict["rating"]=hotel.final("span",{"class":"hotelRating__ratingsummary"}).text
        except AttributeError:
          pass
        parent_amenities_element_hotel.find("div",{"class":"amenity.Wrapper"})
        amenities_list=[]
        for amenity in parent_amenities_element.find_all("div",{"class":"amenity}):
            amenities_list.append(amenity.find("span",{"class":"d_body_sm"}).text.strip())
        hotel_dict["amenities"]=','.join(amenities_list[:-1])
