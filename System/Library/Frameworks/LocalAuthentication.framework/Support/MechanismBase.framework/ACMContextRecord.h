/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:38 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/MechanismBase.framework/MechanismBase
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol LAContextExternalizationProt;
#import <MechanismBase/MechanismBase-Structs.h>
@interface ACMContextRecord : NSObject {

	unsigned _passphrasePurpose;
	ACMHandleRef _context;
	id<LAContextExternalizationProt> _cachedExternalizationDelegate;
	unsigned long long _flags;

}

@property (nonatomic,readonly) ACMHandleRef context;                                                               //@synthesize context=_context - In the implementation block
@property (nonatomic,__weak,readonly) id<LAContextExternalizationProt> cachedExternalizationDelegate;              //@synthesize cachedExternalizationDelegate=_cachedExternalizationDelegate - In the implementation block
@property (assign,nonatomic) unsigned long long flags;                                                             //@synthesize flags=_flags - In the implementation block
@property (assign,nonatomic) unsigned passphrasePurpose;                                                           //@synthesize passphrasePurpose=_passphrasePurpose - In the implementation block
-(unsigned long long)flags;
-(ACMHandleRef)context;
-(void)setFlags:(unsigned long long)arg1 ;
-(id<LAContextExternalizationProt>)cachedExternalizationDelegate;
-(id)initWithACMContext:(ACMHandleRef)arg1 cachedExternalizationDelegate:(id)arg2 ;
-(unsigned)passphrasePurpose;
-(void)setPassphrasePurpose:(unsigned)arg1 ;
@end

