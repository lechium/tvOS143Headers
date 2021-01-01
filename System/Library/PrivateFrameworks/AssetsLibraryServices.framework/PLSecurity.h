/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:46 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AssetsLibraryServices/AssetsLibraryServices-Structs.h>
@interface PLSecurity : NSObject
+(id)_secTask:(SecTaskRef)arg1 grantedEntitlements:(id)arg2 ;
+(BOOL)secTask:(SecTaskRef)arg1 hasEntitlement:(id)arg2 ;
+(BOOL)auditToken:(SCD_Struct_PL11)arg1 hasEntitlement:(id)arg2 ;
+(id)connection:(id)arg1 valuesForEntitlements:(id)arg2 ;
+(id)connection:(id)arg1 valueForEntitlement:(id)arg2 ;
+(BOOL)connection:(id)arg1 hasEntitlement:(id)arg2 ;
+(id)connection:(id)arg1 grantedEntitlements:(id)arg2 ;
+(BOOL)containsPhotoKitEntitlement:(id)arg1 ;
+(BOOL)isEntitledForPhotoKit;
+(BOOL)isEntitledForPhotoKitOrPrivatePhotosTCCForToken:(SCD_Struct_PL11)arg1 ;
+(BOOL)connectionIsEntitledForPhotoKit:(id)arg1 ;
@end

