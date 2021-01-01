/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:07 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/BSXPCSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSDictionary, NSURL, NSString;

@interface FBSOpenApplicationOptions : NSObject <BSXPCCoding, BSXPCSecureCoding, NSCopying> {

	NSMutableDictionary* _payload;

}

@property (nonatomic,copy) NSDictionary * dictionary;               //@synthesize payload=_payload - In the implementation block
@property (nonatomic,readonly) NSURL * url; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsBSXPCSecureCoding;
+(id)optionsWithDictionary:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(void)setDictionary:(NSDictionary *)arg1 ;
-(NSDictionary *)dictionary;
-(NSURL *)url;
-(void)encodeWithBSXPCCoder:(id)arg1 ;
-(id)initWithBSXPCCoder:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)_sanitizeAndValidatePayload;
@end

