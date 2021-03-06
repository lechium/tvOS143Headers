/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:26 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSNumber, NSString;

@interface SAUITemplateFont : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSNumber * size; 
@property (nonatomic,copy) NSString * textStyle; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)font;
+(id)fontWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSNumber *)size;
-(id)groupIdentifier;
-(void)setSize:(NSNumber *)arg1 ;
-(void)setTextStyle:(NSString *)arg1 ;
-(NSString *)textStyle;
-(id)encodedClassName;
@end

