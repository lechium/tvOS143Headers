/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:00 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ApplePushService.framework/ApplePushService
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface APSPair : NSObject {

	id _first;
	id _second;

}

@property (nonatomic,retain) id first;               //@synthesize first=_first - In the implementation block
@property (nonatomic,retain) id second;              //@synthesize second=_second - In the implementation block
+(id)pairWithFirst:(id)arg1 second:(id)arg2 ;
-(void)setSecond:(id)arg1 ;
-(id)second;
-(id)initWithFirst:(id)arg1 second:(id)arg2 ;
-(id)first;
-(void)setFirst:(id)arg1 ;
@end

