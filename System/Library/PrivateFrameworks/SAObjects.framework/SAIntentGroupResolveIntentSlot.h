/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:22 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SABaseClientBoundCommand.h>

@class SAIntentGroupProtobufMessage, NSString, NSNumber;

@interface SAIntentGroupResolveIntentSlot : SABaseClientBoundCommand

@property (nonatomic,retain) SAIntentGroupProtobufMessage * intent; 
@property (nonatomic,copy) NSString * intentSlotKeyPath; 
@property (nonatomic,copy) NSNumber * intentSlotValueIndex; 
@property (nonatomic,copy) NSString * jsonEncodedIntent; 
+(id)resolveIntentSlot;
+(id)resolveIntentSlotWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setIntent:(SAIntentGroupProtobufMessage *)arg1 ;
-(SAIntentGroupProtobufMessage *)intent;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(BOOL)mutatingCommand;
-(NSString *)jsonEncodedIntent;
-(void)setJsonEncodedIntent:(NSString *)arg1 ;
-(NSString *)intentSlotKeyPath;
-(void)setIntentSlotKeyPath:(NSString *)arg1 ;
-(NSNumber *)intentSlotValueIndex;
-(void)setIntentSlotValueIndex:(NSNumber *)arg1 ;
@end

