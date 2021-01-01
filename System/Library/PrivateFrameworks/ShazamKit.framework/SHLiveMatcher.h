/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:03 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ShazamKit.framework/ShazamKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SHLocalStoreDelegate.h>
#import <libobjc.A.dylib/SHMatcher.h>

@protocol SHMatcherDelegate;
@class SHLocalStore, SHMRESignatureMatcher, SHMutableSignature, NSMutableArray, NSString;

@interface SHLiveMatcher : NSObject <SHLocalStoreDelegate, SHMatcher> {

	id<SHMatcherDelegate> delegate;
	SHLocalStore* _localStore;
	SHMRESignatureMatcher* _mreMatcher;
	SHMutableSignature* _mutableSignature;
	NSMutableArray* _referenceSignagures;

}

@property (nonatomic,retain) SHLocalStore * localStore;                          //@synthesize localStore=_localStore - In the implementation block
@property (nonatomic,retain) SHMRESignatureMatcher * mreMatcher;                 //@synthesize mreMatcher=_mreMatcher - In the implementation block
@property (nonatomic,retain) SHMutableSignature * mutableSignature;              //@synthesize mutableSignature=_mutableSignature - In the implementation block
@property (nonatomic,retain) NSMutableArray * referenceSignagures;               //@synthesize referenceSignagures=_referenceSignagures - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SHMatcherDelegate> delegate; 
-(id<SHMatcherDelegate>)delegate;
-(void)setDelegate:(id<SHMatcherDelegate>)arg1 ;
-(SHLocalStore *)localStore;
-(void)matchSignature:(id)arg1 ;
-(void)bufferProduced:(id)arg1 atTime:(id)arg2 ;
-(id)initWithLiveStore:(id)arg1 ;
-(void)setLocalStore:(SHLocalStore *)arg1 ;
-(id)buildRollingSignature;
-(SHMRESignatureMatcher *)mreMatcher;
-(SHMutableSignature *)mutableSignature;
-(void)buildMREForSignatures:(id)arg1 ;
-(void)setMreMatcher:(SHMRESignatureMatcher *)arg1 ;
-(void)setMutableSignature:(SHMutableSignature *)arg1 ;
-(NSMutableArray *)referenceSignagures;
-(void)setReferenceSignagures:(NSMutableArray *)arg1 ;
@end

