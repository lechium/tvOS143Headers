/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:22 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/DKExtensionRegistry.h>

@class NSMutableDictionary, NSArray, NSString;

@interface DKDiagnosticRegistry : NSObject <DKExtensionRegistry> {

	NSMutableDictionary* _diagnosticLookup;

}

@property (nonatomic,retain) NSMutableDictionary * diagnosticLookup;              //@synthesize diagnosticLookup=_diagnosticLookup - In the implementation block
@property (nonatomic,readonly) NSArray * diagnostics; 
@property (nonatomic,readonly) Class extensionClass; 
@property (nonatomic,readonly) Class responseObjectClass; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSArray *)diagnostics;
-(id)adapterForIdentifier:(id)arg1 ;
-(void)addExtensionAdapter:(id)arg1 ;
-(void)enumerateExtensionAdaptersWithBlock:(/*^block*/id)arg1 ;
-(Class)extensionClass;
-(Class)responseObjectClass;
-(id)diagnosticForIdentifier:(id)arg1 ;
-(NSMutableDictionary *)diagnosticLookup;
-(void)setDiagnosticLookup:(NSMutableDictionary *)arg1 ;
@end
