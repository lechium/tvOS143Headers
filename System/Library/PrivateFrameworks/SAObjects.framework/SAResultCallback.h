/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:27 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, NSString;

@interface SAResultCallback : AceObject <SAAceSerializable>

@property (assign,nonatomic) long long code; 
@property (nonatomic,copy) NSArray * commandReferences; 
@property (nonatomic,copy) NSArray * commands; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)resultCallback;
+(id)resultCallbackWithDictionary:(id)arg1 context:(id)arg2 ;
-(long long)code;
-(id)groupIdentifier;
-(void)setCode:(long long)arg1 ;
-(NSArray *)commands;
-(void)setCommands:(NSArray *)arg1 ;
-(id)encodedClassName;
-(NSArray *)commandReferences;
-(void)setCommandReferences:(NSArray *)arg1 ;
@end

