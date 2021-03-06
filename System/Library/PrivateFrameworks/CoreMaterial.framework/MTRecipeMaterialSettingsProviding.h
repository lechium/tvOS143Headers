/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:47 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreMaterial.framework/CoreMaterial
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MTRecipeMaterialSettingsProviding <MTMaterialVersioning,MTMaterialStyleProviding>
@property (nonatomic,readonly) id<MTTinting><MTMaterialFiltering> baseMaterialSettings; 
@property (nonatomic,readonly) id<MTTinting><MTMaterialFiltering> baseOverlaySettings; 
@property (nonatomic,readonly) id<MTTinting><MTMaterialFiltering> primaryOverlaySettings; 
@property (nonatomic,readonly) id<MTTinting><MTMaterialFiltering> secondaryOverlaySettings; 
@property (nonatomic,readonly) id<MTTinting><MTMaterialFiltering> auxiliaryOverlaySettings; 
@required
-(id<MTTinting><MTMaterialFiltering>)baseMaterialSettings;
-(id<MTTinting><MTMaterialFiltering>)baseOverlaySettings;
-(id<MTTinting><MTMaterialFiltering>)primaryOverlaySettings;
-(id<MTTinting><MTMaterialFiltering>)secondaryOverlaySettings;
-(id<MTTinting><MTMaterialFiltering>)auxiliaryOverlaySettings;
-(id)settingsForConfiguration:(id)arg1;

@end

