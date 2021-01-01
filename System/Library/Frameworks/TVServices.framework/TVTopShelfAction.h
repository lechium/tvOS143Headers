/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:44 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary, NSURL;

@interface TVTopShelfAction : NSObject <BSDescriptionProviding, NSSecureCoding> {

	BOOL _showShroud;
	NSString* _title;
	NSDictionary* _userInfo;
	NSString* _imageName;
	NSURL* _URL;

}

@property (setter=_setTitle:,nonatomic,copy) NSString * _title;                        //@synthesize title=_title - In the implementation block
@property (setter=_setUserInfo:,nonatomic,copy) NSDictionary * _userInfo;              //@synthesize userInfo=_userInfo - In the implementation block
@property (setter=_setImageName:,nonatomic,copy) NSString * _imageName;                //@synthesize imageName=_imageName - In the implementation block
@property (assign,setter=_setShowShroud:,nonatomic) BOOL _showShroud;                  //@synthesize showShroud=_showShroud - In the implementation block
@property (nonatomic,copy,readonly) NSURL * URL;                                       //@synthesize URL=_URL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)new;
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)init;
-(NSDictionary *)_userInfo;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(NSURL *)URL;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(NSString *)_title;
-(NSString *)_imageName;
-(void)_setTitle:(id)arg1 ;
-(void)_setImageName:(id)arg1 ;
-(void)_setUserInfo:(id)arg1 ;
-(BOOL)_showShroud;
-(void)_setShowShroud:(BOOL)arg1 ;
@end

