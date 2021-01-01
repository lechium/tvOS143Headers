/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:28 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, NSArray;

@interface SASiriSupport : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * authToken; 
@property (nonatomic,copy) NSArray * endpoints; 
@property (nonatomic,copy) NSArray * useCases; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)siriSupport;
+(id)siriSupportWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)authToken;
-(void)setAuthToken:(NSString *)arg1 ;
-(NSArray *)endpoints;
-(void)setEndpoints:(NSArray *)arg1 ;
-(id)encodedClassName;
-(NSArray *)useCases;
-(void)setUseCases:(NSArray *)arg1 ;
@end

