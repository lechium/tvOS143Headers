/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:10 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOBaseMapItem.h>

@class NSDictionary, GEOMapItemClientAttributes, GEOPlace, NSString, NSDate, GEOAddressObject;

@interface GEOMapItemCoreRoutineEvent : GEOBaseMapItem {

	NSDictionary* _addressDictionary;
	GEOMapItemClientAttributes* _clientAttributes;
	GEOPlace* _place;
	NSString* _eventName;
	NSString* _eventTitle;
	NSDate* _eventDate;
	BOOL _eventIsAllDay;
	GEOCoarseLocationLatLng _coordinate;
	GEOAddressObject* _addressObject;

}
-(id)name;
-(id)description;
-(BOOL)isValid;
-(GEOCoarseLocationLatLng)coordinate;
-(id)_place;
-(id)addressObject;
-(id)_clientAttributes;
-(id)addressDictionary;
-(id)weatherDisplayName;
-(id)geoAddress;
-(id)eventName;
-(id)eventDate;
-(BOOL)isEventAllDay;
-(BOOL)_hasResolvablePartialInformation;
-(BOOL)_responseStatusIsIncomplete;
-(id)initWithAddressDictionary:(id)arg1 eventName:(id)arg2 eventTitle:(id)arg3 eventDate:(id)arg4 eventIsAllDay:(BOOL)arg5 coordinate:(GEOCoarseLocationLatLng)arg6 clientAttributes:(id)arg7 ;
@end

