/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:41 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface VCWifiAssistManager : NSObject {

	unsigned char _wifiAssistState;

}

@property (readonly) BOOL isAvailable; 
@property (readonly) unsigned char wifiAssistState;              //@synthesize wifiAssistState=_wifiAssistState - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)addDelegate:(id)arg1 ;
-(void)removeDelegate:(id)arg1 ;
-(BOOL)isAvailable;
-(unsigned char)wifiAssistState;
@end
