/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:18 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateCore.framework/SoftwareUpdateCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SoftwareUpdateCore/SoftwareUpdateCore-Structs.h>
#import <SoftwareUpdateCore/SUCorePolicyExtension.h>
#import <libobjc.A.dylib/SUCorePolicyExtensionProtocol.h>

@class NSNumber;

@interface SUCorePolicyExtensionAbsoluteCompatibility : SUCorePolicyExtension <SUCorePolicyExtensionProtocol> {

	NSNumber* _compatibilityVersion;

}

@property (nonatomic,retain) NSNumber * compatibilityVersion;              //@synthesize compatibilityVersion=_compatibilityVersion - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)compatibilityVersion;
-(id)summary;
-(void)setCompatibilityVersion:(NSNumber *)arg1 ;
-(id)extensionName;
-(void)extendSoftwareUpdateMAAssetQuery:(id)arg1 ;
-(void)extendDocumentationMAAssetQuery:(id)arg1 ;
-(id)filterSoftwareUpdateAssetArray:(id)arg1 ;
-(id)filterDocumentationAssetArray:(id)arg1 ;
-(void)extendMASoftwareUpdateCatalogDownloadOptions:(id)arg1 ;
-(void)extendMADocumentationCatalogDownloadOptions:(id)arg1 descriptor:(id)arg2 ;
-(void)extendMASoftwareUpdateAssetDownloadOptions:(id)arg1 ;
-(void)extendMADocumentationAssetDownloadOptions:(id)arg1 ;
@end

