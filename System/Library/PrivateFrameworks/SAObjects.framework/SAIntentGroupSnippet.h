/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:30 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SAUISnippet.h>

@class NSString, NSArray, SAIntentGroupProtobufMessage, NSNumber;

@interface SAIntentGroupSnippet : SAUISnippet

@property (nonatomic,copy) NSString * appId; 
@property (nonatomic,copy) NSArray * commands; 
@property (nonatomic,retain) SAIntentGroupProtobufMessage * intent; 
@property (nonatomic,retain) SAIntentGroupProtobufMessage * intentResponse; 
@property (nonatomic,copy) NSString * jsonEncodedIntent; 
@property (nonatomic,copy) NSString * jsonEncodedIntentResponse; 
@property (nonatomic,retain) id<SAServerBoundCommand> processSynapseFlowCommand; 
@property (nonatomic,copy) NSArray * snippetTemplates; 
@property (assign,nonatomic) BOOL widgetAllowed; 
@property (nonatomic,copy) NSNumber * widgetIndex; 
+(id)snippet;
+(id)snippetWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setAppId:(NSString *)arg1 ;
-(NSString *)appId;
-(void)setIntent:(SAIntentGroupProtobufMessage *)arg1 ;
-(SAIntentGroupProtobufMessage *)intent;
-(SAIntentGroupProtobufMessage *)intentResponse;
-(void)setIntentResponse:(SAIntentGroupProtobufMessage *)arg1 ;
-(NSArray *)commands;
-(void)setCommands:(NSArray *)arg1 ;
-(id)encodedClassName;
-(NSString *)jsonEncodedIntent;
-(void)setJsonEncodedIntent:(NSString *)arg1 ;
-(NSString *)jsonEncodedIntentResponse;
-(void)setJsonEncodedIntentResponse:(NSString *)arg1 ;
-(id<SAServerBoundCommand>)processSynapseFlowCommand;
-(void)setProcessSynapseFlowCommand:(id<SAServerBoundCommand>)arg1 ;
-(NSArray *)snippetTemplates;
-(void)setSnippetTemplates:(NSArray *)arg1 ;
-(BOOL)widgetAllowed;
-(void)setWidgetAllowed:(BOOL)arg1 ;
-(NSNumber *)widgetIndex;
-(void)setWidgetIndex:(NSNumber *)arg1 ;
@end

