/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:43 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVServices/TVContentIdentifier.h>

@class Protocol, NSString;

@interface TVSourceContentIdentifier : TVContentIdentifier {

	Protocol* _sourcePublicProtocol;

}

@property (nonatomic,copy,readonly) NSString * sourceBundleIdentifier; 
@property (nonatomic,readonly) Protocol * sourcePublicProtocol;                     //@synthesize sourcePublicProtocol=_sourcePublicProtocol - In the implementation block
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)sourceBundleIdentifier;
-(id)initWithIdentifier:(id)arg1 container:(id)arg2 ;
-(Protocol *)sourcePublicProtocol;
-(id)initWithBundleIdentifier:(id)arg1 publicProtocol:(id)arg2 ;
@end

