/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:53 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ITMLKit/ITMLKit-Structs.h>
#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/NSObject.h>
#import <libobjc.A.dylib/IKJSDeviceSettings.h>
@class NSString, IKJSRestrictions;


@protocol IKJSDeviceSettings <JSExport>
@property (nonatomic,retain,readonly) NSString * language; 
@property (nonatomic,retain,readonly) NSString * storefrontCountryCode; 
@property (nonatomic,readonly) IKJSRestrictions * restrictions; 
@required
-(IKJSRestrictions *)restrictions;
-(NSString *)language;
-(NSString *)storefrontCountryCode;

@end

#import <libobjc.A.dylib/_IKJSDeviceSettingsProxy.h>

@protocol IKAppDeviceConfig;
@class NSString, IKJSRestrictions;

@interface IKJSDeviceSettings : IKJSObject <NSObject, IKJSDeviceSettings, _IKJSDeviceSettingsProxy> {

	id _restrictionDidChangeToken;
	id<IKAppDeviceConfig> _deviceConfig;

}

@property (assign,nonatomic,__weak) id<IKAppDeviceConfig> deviceConfig;              //@synthesize deviceConfig=_deviceConfig - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain,readonly) NSString * language; 
@property (nonatomic,retain,readonly) NSString * storefrontCountryCode; 
@property (nonatomic,readonly) IKJSRestrictions * restrictions; 
-(id)name;
-(void)dealloc;
-(IKJSRestrictions *)restrictions;
-(NSString *)language;
-(CGSize)screen;
-(id)initWithAppContext:(id)arg1 deviceConfig:(id)arg2 ;
-(NSString *)storefrontCountryCode;
-(id)preferredVideoFormat;
-(id)preferredVideoPreviewFormat;
-(CGSize)Screen;
-(id)Restrictions;
-(void)_restrictionsDidChangeNotification:(id)arg1 ;
-(id<IKAppDeviceConfig>)deviceConfig;
-(id)_formatStringForVideoFormat:(unsigned long long)arg1 ;
-(id)asPrivateIKJSDeviceSettings;
-(void)setDeviceConfig:(id<IKAppDeviceConfig>)arg1 ;
@end

