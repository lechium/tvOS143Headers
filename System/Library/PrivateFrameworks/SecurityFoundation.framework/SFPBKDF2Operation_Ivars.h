/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:49 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SFPseudoRandomFunction;
@class NSData;

@interface SFPBKDF2Operation_Ivars : NSObject {

	long long iterationCount;
	id<SFPseudoRandomFunction> pseudoRandomFunction;
	NSData* salt;

}
@end

