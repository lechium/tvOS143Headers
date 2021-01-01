/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:26 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SAUIButton.h>

@class NSString, NSArray, NSURL;

@interface SAVCSContentButton : SAUIButton

@property (nonatomic,copy) NSString * canonicalId; 
@property (nonatomic,copy) NSString * contentType; 
@property (nonatomic,copy) NSArray * togglePlayPauseCommands; 
@property (nonatomic,copy) NSURL * url; 
+(id)contentButton;
+(id)contentButtonWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setUrl:(NSURL *)arg1 ;
-(NSURL *)url;
-(id)groupIdentifier;
-(NSString *)contentType;
-(void)setContentType:(NSString *)arg1 ;
-(id)encodedClassName;
-(NSString *)canonicalId;
-(void)setCanonicalId:(NSString *)arg1 ;
-(NSArray *)togglePlayPauseCommands;
-(void)setTogglePlayPauseCommands:(NSArray *)arg1 ;
@end
