/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:52 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SAML.framework/SAML
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAML/SAMLBaseElement.h>

@class NSString;

@interface SAMLIDPEntry : SAMLBaseElement

@property (nonatomic,readonly) NSString * providerId; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * loc; 
+(id)createElement:(id*)arg1 ;
-(NSString *)name;
-(NSString *)loc;
-(NSString *)providerId;
@end

