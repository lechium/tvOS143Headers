/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:15 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface MNNavigationTraceInfo : NSObject {

	NSString* _pedestrianTracePath;
	double _pedestrianTraceStartRelativeTimestamp;

}

@property (nonatomic,copy) NSString * pedestrianTracePath;                              //@synthesize pedestrianTracePath=_pedestrianTracePath - In the implementation block
@property (assign,nonatomic) double pedestrianTraceStartRelativeTimestamp;              //@synthesize pedestrianTraceStartRelativeTimestamp=_pedestrianTraceStartRelativeTimestamp - In the implementation block
-(void)setPedestrianTracePath:(NSString *)arg1 ;
-(void)setPedestrianTraceStartRelativeTimestamp:(double)arg1 ;
-(NSString *)pedestrianTracePath;
-(double)pedestrianTraceStartRelativeTimestamp;
@end
