/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:50 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SADomainCommand.h>
#import <libobjc.A.dylib/CFLocalAceHandling.h>
#import <libobjc.A.dylib/SAAceSerializable.h>
#import <libobjc.A.dylib/CFLocalAceHandling.h>

@class NSString, NSNumber, CFCBNightShiftSchedule;

@interface CFCBSetNightShiftMode : SADomainCommand <CFLocalAceHandling, SAAceSerializable, CFLocalAceHandling>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSNumber * active; 
@property (nonatomic,copy) NSNumber * enable; 
@property (nonatomic,copy) NSString * mode; 
@property (nonatomic,copy) NSString * option; 
@property (nonatomic,retain) CFCBNightShiftSchedule * schedule; 
+(id)aceObjectWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)setNightShiftMode;
+(id)setNightShiftModeWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setMode:(NSString *)arg1 ;
-(id)groupIdentifier;
-(NSString *)mode;
-(CFCBNightShiftSchedule *)schedule;
-(void)setActive:(NSNumber *)arg1 ;
-(NSNumber *)active;
-(void)setSchedule:(CFCBNightShiftSchedule *)arg1 ;
-(void)setEnable:(NSNumber *)arg1 ;
-(NSNumber *)enable;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)option;
-(void)setOption:(NSString *)arg1 ;
-(void)handleWithCompletion:(/*^block*/id)arg1 ;
@end

