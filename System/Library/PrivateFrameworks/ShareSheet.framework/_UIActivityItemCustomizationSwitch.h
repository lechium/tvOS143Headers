/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:01 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ShareSheet/_UIActivityItemCustomization.h>
#import <libobjc.A.dylib/_UIActivityItemCustomizationSwitch.h>

@protocol _UIActivityItemCustomizationSwitch <NSObject>
@property (nonatomic,readonly) BOOL value; 
@required
-(BOOL)value;

@end


@class NSString;

@interface _UIActivityItemCustomizationSwitch : _UIActivityItemCustomization <_UIActivityItemCustomizationSwitch> {

	BOOL _value;
	/*^block*/id __handler;

}

@property (setter=_setHandler:,nonatomic,copy) id _handler;              //@synthesize _handler=__handler - In the implementation block
@property (nonatomic,readonly) BOOL value; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)value;
-(id)_handler;
-(void)_setValue:(BOOL)arg1 ;
-(id)initWithTitle:(id)arg1 identifier:(id)arg2 value:(BOOL)arg3 footerText:(id)arg4 ;
-(void)_setHandler:(/*^block*/id)arg1 ;
@end

