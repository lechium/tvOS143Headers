/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:52 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSArray, IKJSRWIDependencyDomainType, IKJSRWIDependencyDomain;

@interface IKJSRWIDependencyDomainProperty : NSObject {

	NSString* _reference;
	NSArray* _enumOptions;
	BOOL _required;
	NSString* _name;
	NSString* _purpose;
	NSString* _propertyType;
	IKJSRWIDependencyDomainType* _domainType;
	IKJSRWIDependencyDomain* _domain;

}

@property (nonatomic,readonly) NSString * name;                                              //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * purpose;                                           //@synthesize purpose=_purpose - In the implementation block
@property (getter=isRequired,nonatomic,readonly) BOOL required;                              //@synthesize required=_required - In the implementation block
@property (nonatomic,readonly) NSString * propertyType;                                      //@synthesize propertyType=_propertyType - In the implementation block
@property (nonatomic,__weak,readonly) IKJSRWIDependencyDomainType * domainType;              //@synthesize domainType=_domainType - In the implementation block
@property (nonatomic,__weak,readonly) IKJSRWIDependencyDomain * domain;                      //@synthesize domain=_domain - In the implementation block
+(id)propertyNameMapping;
+(id)typeMapping;
-(NSString *)name;
-(IKJSRWIDependencyDomain *)domain;
-(NSString *)propertyType;
-(IKJSRWIDependencyDomainType *)domainType;
-(NSString *)purpose;
-(id)initWithPropertyDictionary:(id)arg1 ;
-(BOOL)isRequired;
-(id)initWithPropertyDictionary:(id)arg1 forDomain:(id)arg2 ;
-(id)initWithPropertyDictionary:(id)arg1 forType:(id)arg2 ;
-(id)propertyDefinitionString;
-(id)methodParameterString;
@end

