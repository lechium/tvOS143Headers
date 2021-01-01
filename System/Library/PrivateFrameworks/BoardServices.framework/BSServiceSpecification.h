/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:27 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BoardServices/BoardServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSDictionary, NSString;

@interface BSServiceSpecification : NSObject <NSCopying, BSDescriptionProviding> {

	NSDictionary* _options;
	BOOL _derived;
	NSString* _identifier;
	NSDictionary* _configuration;

}

@property (nonatomic,copy,readonly) NSString * identifier;                               //@synthesize identifier=_identifier - In the implementation block
@property (getter=isHiddenAtLaunch,nonatomic,readonly) BOOL hiddenAtLaunch; 
@property (getter=isDerived,nonatomic,readonly) BOOL derived;                            //@synthesize derived=_derived - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(NSString *)identifier;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(BOOL)isDerived;
-(id)optionForKey:(id)arg1 ;
-(BOOL)isHiddenAtLaunch;
@end

