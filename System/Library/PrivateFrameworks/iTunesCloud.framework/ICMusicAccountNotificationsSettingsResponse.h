/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:50 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary, NSArray;

@interface ICMusicAccountNotificationsSettingsResponse : NSObject {

	NSDictionary* _responseDictionary;
	BOOL _wasSuccessful;

}

@property (nonatomic,readonly) NSArray * settingsSwitches; 
@property (nonatomic,readonly) BOOL wasSuccessful;                      //@synthesize wasSuccessful=_wasSuccessful - In the implementation block
+(id)createResponseBodyWithSwitches:(id)arg1 ;
-(BOOL)wasSuccessful;
-(id)initWithResponseDictionary:(id)arg1 ;
-(NSArray *)settingsSwitches;
@end

