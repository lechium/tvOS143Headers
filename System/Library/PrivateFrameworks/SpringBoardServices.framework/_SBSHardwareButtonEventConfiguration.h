/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:09 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface _SBSHardwareButtonEventConfiguration : NSObject {

	unsigned long long _eventMask;
	long long _maximumPriority;

}

@property (assign,nonatomic) unsigned long long eventMask;              //@synthesize eventMask=_eventMask - In the implementation block
@property (assign,nonatomic) long long maximumPriority;                 //@synthesize maximumPriority=_maximumPriority - In the implementation block
-(id)description;
-(void)setEventMask:(unsigned long long)arg1 ;
-(unsigned long long)eventMask;
-(long long)maximumPriority;
-(void)setMaximumPriority:(long long)arg1 ;
@end

