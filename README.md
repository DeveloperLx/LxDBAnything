# LxDBAnything
    Tell you the type of any variable! Print log without any format control symbol! Change debug habit thoroughly! 

### Installation
    You only need drag LxDBAnything.h to your project.

### Support
    Minimum support iOS version: iOS 6.0

### Usage

    #import "LxDBAnything.h"

    id obj = self.view;
    LxDBAnyVar(obj);

    CGPoint point = CGPointMake(12.34, 56.78);
    LxDBAnyVar(point);

    CGSize size = CGSizeMake(87.6, 5.43);
    LxDBAnyVar(size);

    CGRect rect = CGRectMake(2.3, 4.5, 5.6, 7.8);
    LxDBAnyVar(rect);

    NSRange range = NSMakeRange(3, 56);
    LxDBAnyVar(range);

    CGAffineTransform affineTransform = CGAffineTransformMake(1, 2, 3, 4, 5, 6);
    LxDBAnyVar(affineTransform);

    UIEdgeInsets edgeInsets = UIEdgeInsetsMake(3, 4, 5, 6);
    LxDBAnyVar(edgeInsets);

    SEL sel = @selector(viewDidLoad);
    LxDBAnyVar(sel);

    Class class = [UIBarButtonItem class];
    LxDBAnyVar(class);

    NSInteger i = 231;
    LxDBAnyVar(i);

    CGFloat f = M_E;
    LxDBAnyVar(f);

    BOOL b = YES;
    LxDBAnyVar(b);

    char c = 'S';
    LxDBAnyVar(c);

    CGColorSpaceRef colorSpaceRef = CGColorSpaceCreateDeviceRGB();
    LxDBAnyVar(colorSpaceRef);

    ............

    LxPrintAnything(You can use macro LxPrintAnything() print any without quotation as you want!);

    LxPrintf(@"Print format string you customed: %@", LxBox(affineTransform));

    NSLog(@"Even use normal NSLog function to print: %@", LxBox(edgeInsets));

    LxPrintf(@"The type of obj is %@", LxTypeStringOfVar(obj));
    LxPrintf(@"The type of point is %@", LxTypeStringOfVar(point));
    LxPrintf(@"The type of size is %@", LxTypeStringOfVar(size));
    LxPrintf(@"The type of rect is %@", LxTypeStringOfVar(rect));
    LxPrintf(@"The type of range is %@", LxTypeStringOfVar(range));
    LxPrintf(@"The type of affineTransform is %@", LxTypeStringOfVar(affineTransform));
    LxPrintf(@"The type of edgeInsets is %@", LxTypeStringOfVar(edgeInsets));
    LxPrintf(@"The type of class is %@", LxTypeStringOfVar(class));
    LxPrintf(@"The type of i is %@", LxTypeStringOfVar(i));
    LxPrintf(@"The type of f is %@", LxTypeStringOfVar(f));
    LxPrintf(@"The type of b is %@", LxTypeStringOfVar(b));
    LxPrintf(@"The type of c is %@", LxTypeStringOfVar(c));
    LxPrintf(@"The type of colorSpaceRef is %@", LxTypeStringOfVar(colorSpaceRef));

    // Run your application and you'll see:

    🎈-[ViewController viewDidLoad] + 23📍 obj = <UIView: 0x7fea036172a0; frame = (0 0; 414 736); autoresize = W+H; layer = <CALayer: 0x7fea03616340>>
    🎈-[ViewController viewDidLoad] + 26📍 point = NSPoint: {12.34, 56.780000000000001}
    🎈-[ViewController viewDidLoad] + 29📍 size = NSSize: {87.599999999999994, 5.4299999999999997}
    🎈-[ViewController viewDidLoad] + 32📍 rect = {{2.2999999999999998, 4.5}, {5.5999999999999996, 7.7999999999999998}}
    🎈-[ViewController viewDidLoad] + 35📍 range = NSRange: {3, 56}
    🎈-[ViewController viewDidLoad] + 38📍 affineTransform = CGAffineTransform: {{1, 2, 3, 4}, {5, 6}}
    🎈-[ViewController viewDidLoad] + 41📍 edgeInsets = UIEdgeInsets: {3, 4, 5, 6}
    🎈-[ViewController viewDidLoad] + 44📍 sel = viewDidLoad
    🎈-[ViewController viewDidLoad] + 47📍 class = UIBarButtonItem
    🎈-[ViewController viewDidLoad] + 50📍 i = 231
    🎈-[ViewController viewDidLoad] + 53📍 f = 2.718281828459045
    🎈-[ViewController viewDidLoad] + 56📍 b = YES
    🎈-[ViewController viewDidLoad] + 59📍 c = S
    🎈-[ViewController viewDidLoad] + 62📍 colorSpaceRef = 0x7fea03502c40
    🎈-[ViewController viewDidLoad] + 64📍 You can use macro LxPrintAnything() print any without quotation as you want!
    🎈-[ViewController viewDidLoad] + 66📍 Print format string you customed: CGAffineTransform: {{1, 2, 3, 4}, {5, 6}}
    2015-10-25 14:47:05.523 LxDBAnythingDemo[896:26493] Even use normal NSLog function to print: UIEdgeInsets: {3, 4, 5, 6}
    🎈-[ViewController viewDidLoad] + 72📍 The type of obj is UIView
    🎈-[ViewController viewDidLoad] + 73📍 The type of point is CGPoint
    🎈-[ViewController viewDidLoad] + 74📍 The type of size is CGSize
    🎈-[ViewController viewDidLoad] + 75📍 The type of rect is CGRect
    🎈-[ViewController viewDidLoad] + 76📍 The type of range is NSRange
    🎈-[ViewController viewDidLoad] + 77📍 The type of affineTransform is CGAffineTransform
    🎈-[ViewController viewDidLoad] + 78📍 The type of edgeInsets is LxEdgeInsets
    🎈-[ViewController viewDidLoad] + 79📍 The type of class is Class
    🎈-[ViewController viewDidLoad] + 80📍 The type of i is long
    🎈-[ViewController viewDidLoad] + 81📍 The type of f is double
    🎈-[ViewController viewDidLoad] + 82📍 The type of b is BOOL
    🎈-[ViewController viewDidLoad] + 83📍 The type of c is char
    🎈-[ViewController viewDidLoad] + 84📍 The type of colorSpaceRef is pointer

    //  Different debug log experience!

### License
    LxDBAnything is available under the MIT License. See the LICENSE file for more info.