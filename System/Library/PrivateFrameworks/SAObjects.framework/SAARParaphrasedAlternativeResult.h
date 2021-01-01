/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:20 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SAAceView.h>

@class NSString;

@interface SAARParaphrasedAlternativeResult : SAAceView

@property (nonatomic,retain) id<SAClientBoundCommand> command; 
@property (nonatomic,copy) NSString * displayText; 
@property (nonatomic,copy) NSString * paraphrasedIntent; 
+(id)paraphrasedAlternativeResult;
+(id)paraphrasedAlternativeResultWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setCommand:(id<SAClientBoundCommand>)arg1 ;
-(id<SAClientBoundCommand>)command;
-(NSString *)displayText;
-(void)setDisplayText:(NSString *)arg1 ;
-(id)encodedClassName;
-(NSString *)paraphrasedIntent;
-(void)setParaphrasedIntent:(NSString *)arg1 ;
@end

