/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:31 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class INRestaurantGuest, INRestaurantGuestDisplayPreferences;


@protocol INGetRestaurantGuestIntentResponseExport <NSObject,JSExport>
@property (nonatomic,copy) INRestaurantGuest * guest; 
@property (nonatomic,copy) INRestaurantGuestDisplayPreferences * guestDisplayPreferences; 
@property (nonatomic,readonly) long long code; 
@required
-(id)init;
-(long long)code;
-(INRestaurantGuest *)guest;
-(void)setGuest:(id)arg1;
-(INRestaurantGuestDisplayPreferences *)guestDisplayPreferences;
-(void)setGuestDisplayPreferences:(id)arg1;

@end

