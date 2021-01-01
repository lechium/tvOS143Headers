/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:22 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray;

@interface SAUIUnlockDevice : SABaseClientBoundCommand

@property (nonatomic,copy) NSArray * cancellationCommands; 
@property (nonatomic,copy) NSArray * failureCommands; 
@property (nonatomic,copy) NSArray * successCommands; 
+(id)unlockDevice;
+(id)unlockDeviceWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSArray *)cancellationCommands;
-(void)setCancellationCommands:(NSArray *)arg1 ;
-(NSArray *)failureCommands;
-(void)setFailureCommands:(NSArray *)arg1 ;
-(NSArray *)successCommands;
-(void)setSuccessCommands:(NSArray *)arg1 ;
@end

