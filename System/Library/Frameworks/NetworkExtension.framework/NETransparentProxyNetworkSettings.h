/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:14 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <NetworkExtension/NETunnelNetworkSettings.h>

@class NSArray;

@interface NETransparentProxyNetworkSettings : NETunnelNetworkSettings {

	BOOL _isFullyTransparent;
	NSArray* _includedNetworkRules;
	NSArray* _excludedNetworkRules;

}

@property (assign) BOOL isFullyTransparent;                   //@synthesize isFullyTransparent=_isFullyTransparent - In the implementation block
@property (copy) NSArray * includedNetworkRules;              //@synthesize includedNetworkRules=_includedNetworkRules - In the implementation block
@property (copy) NSArray * excludedNetworkRules;              //@synthesize excludedNetworkRules=_excludedNetworkRules - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)checkValidityAndCollectErrors:(id)arg1 ;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(NSArray *)includedNetworkRules;
-(NSArray *)excludedNetworkRules;
-(BOOL)isFullyTransparent;
-(void)setIncludedNetworkRules:(NSArray *)arg1 ;
-(void)setExcludedNetworkRules:(NSArray *)arg1 ;
-(void)setIsFullyTransparent:(BOOL)arg1 ;
-(BOOL)validateNetworkRule:(id)arg1 collectErrors:(id)arg2 ;
@end

