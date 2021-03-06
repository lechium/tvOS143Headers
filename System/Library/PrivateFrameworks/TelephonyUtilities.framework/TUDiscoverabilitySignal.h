/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:04 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface TUDiscoverabilitySignal : NSObject {

	NSString* _identifier;
	NSString* _context;

}

@property (nonatomic,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * context;                 //@synthesize context=_context - In the implementation block
+(id)osBuild;
-(NSString *)identifier;
-(NSString *)context;
-(id)_discoverabilitySignalsStream;
-(id)initWithIdentifier:(id)arg1 context:(id)arg2 ;
-(void)donateSignalWithCompletion:(/*^block*/id)arg1 ;
@end

