/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:16 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/_CUIRawDataRendition.h>

@interface _CUIRecognitionObjectRendition : _CUIRawDataRendition {

	int _objectVersion;
	SCD_Struct_CS10 _transformation;

}
-(id)_initWithCSIHeader:(const csiheader*)arg1 ;
-(int)objectVersion;
-(SCD_Struct_CS10)transformation;
-(id)initWithCSIData:(id)arg1 forKey:(const renditionkeytoken*)arg2 ;
-(void)_initalizeMetadataFromCSIData:(const csiheader*)arg1 ;
@end

