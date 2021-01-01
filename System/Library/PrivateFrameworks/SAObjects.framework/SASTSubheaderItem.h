/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:18 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/AceObject.h>
#import <SAObjects/SASTTemplateItem.h>

@class SAUIDecoratedText, NSString;

@interface SASTSubheaderItem : AceObject <SASTTemplateItem>

@property (nonatomic,retain) SAUIDecoratedText * leftText; 
@property (nonatomic,retain) SAUIDecoratedText * rightText; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)subheaderItem;
+(id)subheaderItemWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(SAUIDecoratedText *)leftText;
-(void)setLeftText:(SAUIDecoratedText *)arg1 ;
-(SAUIDecoratedText *)rightText;
-(void)setRightText:(SAUIDecoratedText *)arg1 ;
@end

