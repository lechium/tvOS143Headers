/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:44 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/REAutomaticExportedInterface.h>

@class NSArray;

@interface _RERoutineData : NSObject <REAutomaticExportedInterface> {

	long long _mode;
	NSArray* _locationsOfInterest;

}

@property (assign,nonatomic) long long mode;                             //@synthesize mode=_mode - In the implementation block
@property (nonatomic,retain) NSArray * locationsOfInterest;              //@synthesize locationsOfInterest=_locationsOfInterest - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)setMode:(long long)arg1 ;
-(long long)mode;
-(NSArray *)locationsOfInterest;
-(BOOL)isEqualToRoutineData:(id)arg1 ;
-(void)setLocationsOfInterest:(NSArray *)arg1 ;
@end
