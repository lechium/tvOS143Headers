/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:46 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RunningBoard/RunningBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class RBProcess, RBSProcessIdentity, NSString;

@interface RBConcreteTarget : NSObject <NSCopying>

@property (nonatomic,readonly) RBProcess * process; 
@property (nonatomic,copy,readonly) RBSProcessIdentity * identity; 
@property (nonatomic,copy,readonly) NSString * environment; 
@property (getter=isSystem,nonatomic,readonly) BOOL system; 
+(id)systemTarget;
+(id)targetWithIdentity:(id)arg1 environment:(id)arg2 ;
+(id)targetWithProcess:(id)arg1 environment:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(RBSProcessIdentity *)identity;
-(NSString *)environment;
-(RBProcess *)process;
-(BOOL)isSystem;
-(id)createRBSTarget;
@end
