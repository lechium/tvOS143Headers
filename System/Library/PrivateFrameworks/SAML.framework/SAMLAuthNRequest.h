/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:52 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SAML.framework/SAML
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAML/XMLWrapperDoc.h>

@class NSData, SAMLAuthNRequestElement, NSString;

@interface SAMLAuthNRequest : XMLWrapperDoc {

	NSData* _schemaData;
	SAMLAuthNRequestElement* _requestElement;

}

@property (nonatomic,retain) SAMLAuthNRequestElement * requestElement;              //@synthesize requestElement=_requestElement - In the implementation block
@property (nonatomic,retain) NSString * issuer; 
-(NSString *)issuer;
-(void)setProviderName:(id)arg1 ;
-(void)setIssuer:(NSString *)arg1 ;
-(id)initWithData:(id)arg1 schema:(id)arg2 error:(id*)arg3 ;
-(id)initWithElement:(id)arg1 schema:(id)arg2 error:(id*)arg3 ;
-(SAMLAuthNRequestElement *)requestElement;
-(void)setSubjectFromResponse:(id)arg1 ;
-(void)setRequestElement:(SAMLAuthNRequestElement *)arg1 ;
-(void)setForceAuthN:(BOOL)arg1 ;
-(void)setIsPassive:(BOOL)arg1 ;
@end

