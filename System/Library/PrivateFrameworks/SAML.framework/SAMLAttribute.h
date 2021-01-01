/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:52 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SAML.framework/SAML
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAML/SAMLBaseElement.h>

@class NSString, NSArray;

@interface SAMLAttribute : SAMLBaseElement

@property (nonatomic,retain) NSString * name; 
@property (nonatomic,readonly) NSString * nameFormat; 
@property (nonatomic,readonly) NSString * friendlyName; 
@property (nonatomic,readonly) NSArray * values; 
+(id)createElement:(id*)arg1 ;
-(NSString *)name;
-(NSArray *)values;
-(void)setName:(NSString *)arg1 ;
-(NSString *)friendlyName;
-(NSString *)nameFormat;
-(void)addAttributeValue:(id)arg1 ;
@end
