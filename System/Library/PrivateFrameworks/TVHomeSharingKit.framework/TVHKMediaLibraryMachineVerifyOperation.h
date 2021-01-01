/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:25 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVHomeSharingKit/TVHKMediaLibraryRequestOperation.h>

@interface TVHKMediaLibraryMachineVerifyOperation : TVHKMediaLibraryRequestOperation {

	BOOL _verifiedSuccessfully;

}

@property (assign,nonatomic) BOOL verifiedSuccessfully;              //@synthesize verifiedSuccessfully=_verifiedSuccessfully - In the implementation block
-(void)_handleResponse:(id)arg1 ;
-(id)initWithRequest:(id)arg1 requestSession:(id)arg2 ;
-(void)setVerifiedSuccessfully:(BOOL)arg1 ;
-(BOOL)verifiedSuccessfully;
-(id)initWithMachineIdentifier:(unsigned long long)arg1 sessionState:(id)arg2 requestSession:(id)arg3 ;
@end

