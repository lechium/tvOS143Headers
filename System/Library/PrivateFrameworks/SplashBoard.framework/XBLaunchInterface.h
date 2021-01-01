/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:55 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, XBLaunchInterfaceConfiguration;

@interface XBLaunchInterface : NSObject <BSXPCCoding, NSSecureCoding> {

	BOOL _default;
	unsigned long long _type;
	NSString* _name;
	NSString* _identifier;
	NSArray* _urlSchemes;
	XBLaunchInterfaceConfiguration* _configuration;

}

@property (assign,nonatomic) unsigned long long type;                                       //@synthesize type=_type - In the implementation block
@property (assign,getter=_isDefault,nonatomic) BOOL _default;                               //@synthesize default=_default - In the implementation block
@property (nonatomic,copy) NSString * name;                                                 //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                           //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSArray * urlSchemes;                                          //@synthesize urlSchemes=_urlSchemes - In the implementation block
@property (nonatomic,readonly) XBLaunchInterfaceConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) BOOL isXIB; 
@property (nonatomic,readonly) BOOL isStoryboard; 
@property (nonatomic,readonly) BOOL isConfiguration; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSString *)name;
-(NSString *)description;
-(void)setType:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)type;
-(void)setName:(NSString *)arg1 ;
-(NSString *)identifier;
-(XBLaunchInterfaceConfiguration *)configuration;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(BOOL)_isDefault;
-(id)initWithType:(unsigned long long)arg1 name:(id)arg2 identifier:(id)arg3 urlSchemes:(id)arg4 isDefault:(BOOL)arg5 ;
-(id)initWithConfiguration:(id)arg1 identifier:(id)arg2 urlSchemes:(id)arg3 isDefault:(BOOL)arg4 ;
-(BOOL)isStoryboard;
-(BOOL)isXIB;
-(BOOL)isConfiguration;
-(void)set_default:(BOOL)arg1 ;
-(NSArray *)urlSchemes;
-(void)setUrlSchemes:(NSArray *)arg1 ;
@end

