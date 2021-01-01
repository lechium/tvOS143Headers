/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:14 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/SharedUtils.framework/SharedUtils
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol LAContextExternalizationProt, LAContextExternalizationObserverProt;
@class NSData;

@interface LACachedExternalizedContext : NSObject {

	id<LAContextExternalizationProt> _externalizationDelegate;
	NSData* _cachedExternalizedContext;
	id<LAContextExternalizationObserverProt> _externalizationObserver;

}

@property (nonatomic,retain) NSData * cachedExternalizedContext;                                                   //@synthesize cachedExternalizedContext=_cachedExternalizedContext - In the implementation block
@property (nonatomic,readonly) NSData * externalizedContext; 
@property (assign,nonatomic,__weak) id<LAContextExternalizationObserverProt> externalizationObserver;              //@synthesize externalizationObserver=_externalizationObserver - In the implementation block
-(id)initWithExternalizedContext:(id)arg1 ;
-(NSData *)externalizedContext;
-(void)externalizedContextWithReply:(/*^block*/id)arg1 ;
-(NSData *)cachedExternalizedContext;
-(void)setCachedExternalizedContext:(NSData *)arg1 ;
-(id)externalizedContextWithError:(id*)arg1 ;
-(id)initWithExternalizationDelegate:(id)arg1 ;
-(id<LAContextExternalizationObserverProt>)externalizationObserver;
-(void)setExternalizationObserver:(id<LAContextExternalizationObserverProt>)arg1 ;
@end

