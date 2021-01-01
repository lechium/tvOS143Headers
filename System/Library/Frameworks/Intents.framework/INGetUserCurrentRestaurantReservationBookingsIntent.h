/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:33 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Intents/Intents-Structs.h>
#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INGetUserCurrentRestaurantReservationBookingsIntentExport.h>
#import <libobjc.A.dylib/NSCopying.h>

@class INRestaurant, NSString, NSNumber, NSDate;

@interface INGetUserCurrentRestaurantReservationBookingsIntent : INIntent <INGetUserCurrentRestaurantReservationBookingsIntentExport, NSCopying> {

	INRestaurant* _restaurant;
	NSString* _reservationIdentifier;
	NSNumber* _maximumNumberOfResults;
	NSDate* _earliestBookingDateForResults;

}

@property (nonatomic,copy) INRestaurant * restaurant;                           //@synthesize restaurant=_restaurant - In the implementation block
@property (nonatomic,copy) NSString * reservationIdentifier;                    //@synthesize reservationIdentifier=_reservationIdentifier - In the implementation block
@property (nonatomic,copy) NSNumber * maximumNumberOfResults;                   //@synthesize maximumNumberOfResults=_maximumNumberOfResults - In the implementation block
@property (nonatomic,copy) NSDate * earliestBookingDateForResults;              //@synthesize earliestBookingDateForResults=_earliestBookingDateForResults - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)intentDescription;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(INRestaurant *)restaurant;
-(void)setRestaurant:(INRestaurant *)arg1 ;
-(NSString *)reservationIdentifier;
-(void)setReservationIdentifier:(NSString *)arg1 ;
-(NSNumber *)maximumNumberOfResults;
-(void)setMaximumNumberOfResults:(NSNumber *)arg1 ;
-(NSDate *)earliestBookingDateForResults;
-(void)setEarliestBookingDateForResults:(NSDate *)arg1 ;
-(id)initWithRestaurant:(id)arg1 reservationIdentifier:(id)arg2 maximumNumberOfResults:(id)arg3 earliestBookingDateForResults:(id)arg4 ;
@end

