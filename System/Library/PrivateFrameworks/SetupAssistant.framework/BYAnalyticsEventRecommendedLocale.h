/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:26 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface BYAnalyticsEventRecommendedLocale : NSObject {

	BOOL _userVisitedLocalePane;
	BOOL _userSawRecommendedLocale;
	unsigned long long _source;
	double _durationOfWiFiScan;

}

@property (assign,nonatomic) unsigned long long source;                  //@synthesize source=_source - In the implementation block
@property (assign,nonatomic) double durationOfWiFiScan;                  //@synthesize durationOfWiFiScan=_durationOfWiFiScan - In the implementation block
@property (assign,nonatomic) BOOL userVisitedLocalePane;                 //@synthesize userVisitedLocalePane=_userVisitedLocalePane - In the implementation block
@property (assign,nonatomic) BOOL userSawRecommendedLocale;              //@synthesize userSawRecommendedLocale=_userSawRecommendedLocale - In the implementation block
+(id)sharedInstance;
-(id)init;
-(unsigned long long)source;
-(void)setSource:(unsigned long long)arg1 ;
-(id)eventPayload;
-(void)setDurationOfWiFiScan:(double)arg1 ;
-(BOOL)userVisitedLocalePane;
-(double)durationOfWiFiScan;
-(BOOL)userSawRecommendedLocale;
-(void)setUserVisitedLocalePane:(BOOL)arg1 ;
-(void)setUserSawRecommendedLocale:(BOOL)arg1 ;
@end

