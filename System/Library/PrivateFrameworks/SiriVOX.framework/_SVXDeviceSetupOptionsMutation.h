/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:54 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SiriVOX.framework/SiriVOX
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriVOX/SiriVOX-Structs.h>
#import <libobjc.A.dylib/SVXDeviceSetupOptionsMutating.h>

@class SVXDeviceSetupOptions, NSString;

@interface _SVXDeviceSetupOptionsMutation : NSObject <SVXDeviceSetupOptionsMutating> {

	SVXDeviceSetupOptions* _baseModel;
	NSString* _languageCode;
	long long _gender;
	long long _hasActiveAccount;
	long long _isNewsRestricted;
	struct {
		unsigned isDirty : 1;
		unsigned hasLanguageCode : 1;
		unsigned hasGender : 1;
		unsigned hasHasActiveAccount : 1;
		unsigned hasIsNewsRestricted : 1;
	}  _mutationFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setGender:(long long)arg1 ;
-(void)setLanguageCode:(id)arg1 ;
-(id)generate;
-(id)initWithBaseModel:(id)arg1 ;
-(void)setHasActiveAccount:(long long)arg1 ;
-(void)setIsNewsRestricted:(long long)arg1 ;
@end
