/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:53 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKit/HomeKit-Structs.h>
#import <HomeKit/HMAssistantAccessControl.h>

@class NSArray;

@interface HMMutableAssistantAccessControl : HMAssistantAccessControl

@property (getter=isEnabled) BOOL enabled; 
@property (assign) BOOL allowUnauthenticatedRequests; 
@property (copy) NSArray * accessories; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(unsigned long long)options;
-(void)setOptions:(unsigned long long)arg1 ;
-(BOOL)isEnabled;
-(NSArray *)accessories;
-(void)setAllowUnauthenticatedRequests:(BOOL)arg1 ;
-(void)addAccessory:(id)arg1 ;
-(void)setAccessories:(NSArray *)arg1 ;
-(void)removeAccessory:(id)arg1 ;
-(BOOL)allowUnauthenticatedRequests;
@end

