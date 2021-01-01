/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:29 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreBrightness/CoreBrightness-Structs.h>
#import <libobjc.A.dylib/NightShiftSupportProtocol.h>

@protocol CBContainerProtocol;
@class NSString;

@interface NightShiftDisplayWrapper : NSObject <NightShiftSupportProtocol> {

	DisplayRef _display;
	id<CBContainerProtocol> _container;

}

@property (retain) id<CBContainerProtocol> container;               //@synthesize container=_container - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id<CBContainerProtocol>)container;
-(id)initWithDisplay:(DisplayRef)arg1 ;
-(void)setNightShiftFactorDictionary:(id)arg1 ;
-(id)copyPreferenceForKey:(id)arg1 user:(id)arg2 ;
-(void)setPreference:(id)arg1 forKey:(id)arg2 user:(id)arg3 ;
-(void)setContainer:(id<CBContainerProtocol>)arg1 ;
@end

