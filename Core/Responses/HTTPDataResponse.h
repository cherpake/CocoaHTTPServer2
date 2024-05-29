#import <Foundation/Foundation.h>
#import "HTTPResponse.h"


@interface HTTPDataResponse : NSObject <HTTPResponse>
{
	NSUInteger offset;
	NSData *data;
    NSString* contentType;
}

- (id)initWithData:(NSData *)data;
- (id)initWithData:(NSData *)data contentType:(NSString*)contentType;

@end
