/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:21 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class SACalendarSource, NSString;

@interface SACalendarDefaultSourceGetCompleted : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,retain) SACalendarSource * aceCalendarSource; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultSourceGetCompleted;
+(id)defaultSourceGetCompletedWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)defaultSourceGetCompletedWithAceCalendarSource:(id)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(id)initWithAceCalendarSource:(id)arg1 ;
-(void)setAceCalendarSource:(SACalendarSource *)arg1 ;
-(SACalendarSource *)aceCalendarSource;
@end

