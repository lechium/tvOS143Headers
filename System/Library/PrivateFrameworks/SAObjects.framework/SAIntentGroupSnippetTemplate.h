/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:21 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SADomainObject.h>

@class SAUISnippet, NSArray, NSString;

@interface SAIntentGroupSnippetTemplate : SADomainObject

@property (nonatomic,retain) SAUISnippet * detailSnippet; 
@property (nonatomic,copy) NSArray * intentSlotKeyPaths; 
@property (nonatomic,copy) NSString * key; 
+(id)snippetTemplate;
+(id)snippetTemplateWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(SAUISnippet *)detailSnippet;
-(void)setDetailSnippet:(SAUISnippet *)arg1 ;
-(NSArray *)intentSlotKeyPaths;
-(void)setIntentSlotKeyPaths:(NSArray *)arg1 ;
@end

