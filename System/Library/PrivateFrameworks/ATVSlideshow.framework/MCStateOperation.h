/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:51 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ATVSlideshow/MCAction.h>

@class NSString;

@interface MCStateOperation : MCAction {

	NSString* _stateKey;

}

@property (copy) NSString * stateKey;                          //@synthesize stateKey=_stateKey - In the implementation block
@property (assign,nonatomic) BOOL alwaysNotifies; 
@property (assign,nonatomic) BOOL recordsTime; 
+(id)stateOperationForTargetPlugObjectID:(id)arg1 withStateKey:(id)arg2 ;
-(id)description;
-(NSString *)stateKey;
-(void)setStateKey:(NSString *)arg1 ;
-(void)demolish;
-(BOOL)recordsTime;
-(BOOL)alwaysNotifies;
-(id)imprint;
-(void)_copySelfToSnapshot:(id)arg1 ;
-(id)initWithImprint:(id)arg1 ;
-(void)setAlwaysNotifies:(BOOL)arg1 ;
-(void)setRecordsTime:(BOOL)arg1 ;
@end

